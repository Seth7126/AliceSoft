// 函数: sub_458380
// 地址: 0x458380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_458380(edi[2])
    int32_t eax_1 = esi[5]
    edi = *edi
    
    if (eax_1 != 0)
        j__free(eax_1)
        esi[5] = 0
        esi[6] = 0
        esi[7] = 0
    
    j__free(esi)
    esi = edi
while (*(edi + 0xd) == 0)
