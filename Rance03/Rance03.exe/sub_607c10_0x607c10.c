// 函数: sub_607c10
// 地址: 0x607c10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg2

if (arg3 == esi)
    return arg4

int32_t* edi = arg4

do
    esi -= 0x18
    edi -= 0x18
    
    if (edi != esi)
        if (edi[5] u>= 0x10)
            j__free(*edi)
        
        edi[5] = 0xf
        edi[4] = 0
        *edi = 0
        
        if (esi[5] u>= 0x10)
            *edi = *esi
            *esi = 0
        else
            void* eax = esi[4]
            
            if (eax != 0xffffffff)
                _memcpy(edi, esi, eax + 1)
        
        edi[4] = esi[4]
        edi[5] = esi[5]
        esi[5] = 0xf
        esi[4] = 0
        *esi = 0
while (esi != arg3)

return edi
