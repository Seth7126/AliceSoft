// 函数: sub_48c240
// 地址: 0x48c240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg3

if (edi == arg2)
    return arg4

int32_t* esi = arg4

do
    if (esi != edi)
        int32_t eax = *esi
        
        if (eax != 0)
            j__free(eax)
            *esi = 0
            esi[1] = 0
            esi[2] = 0
        
        *esi = *edi
        esi[1] = edi[1]
        esi[2] = edi[2]
        *edi = 0
        edi[1] = 0
        edi[2] = 0
    
    edi = &edi[3]
    esi = &esi[3]
while (edi != arg2)

return esi
