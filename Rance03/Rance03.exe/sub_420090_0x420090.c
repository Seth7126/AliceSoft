// 函数: sub_420090
// 地址: 0x420090
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** edi = arg1
void** esi = edi

if (*(edi + 0xd) != 0)
    return 

do
    sub_420090(esi[2])
    esi = *esi
    j__free(edi)
    edi = esi
while (*(esi + 0xd) == 0)
