// 函数: sub_4db1c0
// 地址: 0x4db1c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *(arg1 + 0x20)
uint32_t ebx_3 = (*(arg1 + 0x24) - esi + 3) u>> 2
int32_t edi = 0

if (esi u> *(arg1 + 0x24))
    ebx_3 = 0

int32_t edx = arg2

if (ebx_3 != 0)
    do
        void* eax_1 = *esi
        
        if (*(eax_1 + 0x29) != 0 && *(eax_1 + 0x20) != 0)
            sub_4db1c0(edx)
            edx = arg2
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

int32_t* esi_1 = *(arg1 + 0x38)
int32_t* result = *(arg1 + 0x3c)
int32_t ebx_4 = 0
uint32_t ecx_4 = (result - esi_1 + 3) u>> 2

if (esi_1 u> result)
    ecx_4 = 0

if (ecx_4 != 0)
    do
        void* eax_2 = *esi_1
        result = sub_4dd660(*(eax_2 + 0x10), edx)
        
        if (result != 0)
            void* eax_3 = eax_2
            int32_t* ecx_6 = *(eax_3 + 0x18)
            
            if (ecx_6 != 0)
                (*(*ecx_6 + 4))()
                eax_3 = eax_2
            
            *(eax_3 + 0x18) = result
            result = (**result)()
        
        edx = arg2
        ebx_4 += 1
        esi_1 = &esi_1[1]
    while (ebx_4 != ecx_4)

return result
