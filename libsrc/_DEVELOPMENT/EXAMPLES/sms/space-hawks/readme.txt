Space Hawks by KanedaFr
http://www.smspower.org/Homebrew/SpaceHawks-SMS
https://bitbucket.org/SpritesMind/spacehawks_sms/downloads/?tab=branches

sccz80 compile:
// zcc +sms -v -startup=8 -clib=new -O3 @zproject-sms.lst -o spacehawks -create-app -pragma-include:zpragma.inc

zsdcc compile:
zcc +sms -v -startup=8 -clib=sdcc_iy -SO2 --max-allocs-per-node200000 @zproject-sms.lst -o spacehawks -create-app -pragma-include:zpragma.inc
// SO3 produces bugged compile
