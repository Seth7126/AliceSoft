// 函数: sub_57e540
// 地址: 0x57e540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_3 = *(arg1 + 0x50)
int32_t* esi = *(arg1 + 0x4c)
int32_t result = 0
int32_t ecx = 0
uint32_t ebx_3 = (eax_3 - esi + 3) u>> 2

if (esi u> eax_3)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        void* eax = *esi
        
        if (eax != 0)
            result += (*(eax + 0x2c) - *(eax + 0x28)) s/ 0xbc
        
        ecx += 1
        esi = &esi[1]
    while (ecx != ebx_3)

return result
