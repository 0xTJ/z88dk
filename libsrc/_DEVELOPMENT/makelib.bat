copy /Y target\zx\clib_cfg.asm .
copy /Y target\zx\clib_target_cfg.asm .
z80asm -d -ns -nm -Mo -xzx_asm @target/zx/library/zx_asm.lst
move /Y zx_asm.lib lib
del /S *.o
del /S *.err
z80asm -d -ns -nm -Mo -xzx_sccz80 @target/zx/library/zx_sccz80.lst
move /Y zx_sccz80.lib lib
del /S *.o
del /S *.err
z80asm -d -ns -nm -Mo -xzx_sdcc_ix -D__SDCC -D__SDCC_IX @target/zx/library/zx_sdcc_ix.lst
move /Y zx_sdcc_ix.lib lib
del /S *.o
del /S *.err
z80asm -d -ns -nm -Mo -IXIY -xzx_sdcc_iy -D__SDCC -D__SDCC_IY @target/zx/library/zx_sdcc_iy.lst
move /Y zx_sdcc_iy.lib lib
del /S *.o
del /S *.err


copy /Y target\embedded\clib_cfg.asm .
copy /Y target\embedded\clib_target_cfg.asm .
z80asm -d -ns -nm -Mo -xembedded_asm @target/embedded/library/embedded_asm.lst
move /Y embedded_asm.lib lib
del /S *.o
del /S *.err
z80asm -d -ns -nm -Mo -xembedded_sccz80 @target/embedded/library/embedded_sccz80.lst
move /Y embedded_sccz80.lib lib
del /S *.o
del /S *.err
z80asm -d -ns -nm -Mo -xembedded_sdcc_ix -D__SDCC -D__SDCC_IX @target/embedded/library/embedded_sdcc_ix.lst
move /Y embedded_sdcc_ix.lib lib
del /S *.o
del /S *.err
z80asm -d -ns -nm -Mo -IXIY -xembedded_sdcc_iy -D__SDCC -D__SDCC_IY @target/embedded/library/embedded_sdcc_iy.lst
move /Y embedded_sdcc_iy.lib lib
del /S *.o
del /S *.err
