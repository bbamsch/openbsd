CFLAGS += -fpic
CFLAGS += -march=rv64gc
AFLAGS += -D_STANDALONE
CPPFLAGS += -I${.CURDIR}/../../lib/libc/arch/riscv64
LD_SCRIPT = ${.CURDIR}/${MACHINE_CPU}/ld.script

RELATIVE_RELOC=R_RISCV_RELATIVE
