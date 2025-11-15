// 函数: sub_4fbbe0
// 地址: 0x4fbbe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = 0
int32_t* ecx = *arg1
int32_t result = arg1[1]
uint32_t edx_3 = (result - ecx + 3) u>> 2

if (ecx u> result)
    edx_3 = 0

if (edx_3 != 0)
    do
        void* edi_1 = *ecx
        ecx = &ecx[1]
        *(edi_1 + 0x1b0) += arg2
        *(edi_1 + 5) = 0
        *(edi_1 + 0x19c) += arg2
        int32_t eax = *(edi_1 + 0x21c)
        int32_t esi_1 = eax + arg2
        result = 0x1f5
        
        if (esi_1 s< eax)
            esi_1 = 0x1f5
        
        ebp += 1
        *(edi_1 + 0x21c) = esi_1
    while (ebp != edx_3)

return result
