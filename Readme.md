# Building SDK image for ARC HSDK board with OpenEmbedded

## Preparation

### Checkout OpenEmbedded sources
```
mkdir oe
cd oe
repo init -u https://github.com/EvgeniiDidin/meta-synopsys -b didin_arc_2020.03 -m tools/manifests/synopsys-oe.xml
repo sync
```

### Run OE tuned docker image based on Centos 7
```
docker run --rm -it -v <path-to-oe>:/workdir crops/poky --workdir=/workdir
```

### Setup environment and build image
```
. ./openembedded-core/oe-init-build-env
bitbake-layers add-layer ../meta-openembedded/meta-oe
bitbake-layers add-layer ../meta-synopsys
MACHINE=hsdk bitbake core-image-base -k
```

After several hours of building the result image will be stored here:
**build/tmp-glibc/deploy/images/hsdk/core-image-base-hsdk.wic**
