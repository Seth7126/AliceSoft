// 函数: sub_59e970
// 地址: 0x59e970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_59e970(edi[2])
    edi = *edi
    esi[4] = &sealengine::CWriteVertex::`vftable'
    int32_t eax_1 = esi[6]
    
    if (eax_1 != 0)
        j__free(eax_1)
        esi[6] = 0
        esi[7] = 0
        esi[8] = 0
    
    j__free(esi)
    esi = edi
while (*(edi + 0xd) == 0)
