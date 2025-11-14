// 函数: sub_4f70b0
// 地址: 0x4f70b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = sub_4a8b20(data_75d4fc + 0x174, arg1)

if (eax == 0)
    eax.b = 0
    return eax

int32_t edx = *(eax + 0x3c)
int32_t* ecx_2 = *(eax + 0x38)

if (ecx_2 != edx)
    while (*ecx_2 != arg2)
        ecx_2 = &ecx_2[1]
        
        if (ecx_2 == edx)
            break

int32_t eax_1
eax_1.b = ecx_2 != edx
return eax_1
