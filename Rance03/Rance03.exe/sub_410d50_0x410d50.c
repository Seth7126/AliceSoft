// 函数: sub_410d50
// 地址: 0x410d50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

char* edi = arg4
int32_t* esi = arg3 + 0x10

do
    if (edi != 0)
        *(edi + 0x14) = 0xf
        *(edi + 0x10) = 0
        *edi = 0
        
        if (esi[1] u>= 0x10)
            *edi = esi[-4]
            esi[-4] = 0
        else
            void* eax = *esi
            
            if (eax != 0xffffffff)
                _memcpy(edi, &esi[-4], eax + 1)
        
        *(edi + 0x10) = *esi
        *(edi + 0x14) = esi[1]
        esi[1] = 0xf
        *esi = 0
        esi[-4].b = 0
    
    esi = &esi[6]
    edi = &edi[0x18]
while (&esi[-4] != arg2)

return edi
