DESCRIPTION = "Simple helloworld application"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "git://github.com/mohseen-ahamad/calculator;protocol=https;branch=master"

S = "${WORKDIR}/git"

SRCREV = "${AUTOREV}"

do_compile() {
    ${CC} add.c mul.c sub.c div.c math.c ${LDFLAGS} -o math
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 math ${D}${bindir}
}
