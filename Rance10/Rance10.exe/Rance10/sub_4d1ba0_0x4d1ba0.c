// 函数: sub_4d1ba0
// 地址: 0x4d1ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void* result = *(arg1 + 0x1c)
int32_t* edi = *(arg1 + 0x18)
void* result_1 = result

if (edi != result)
    do
        void* eax = *edi
        int32_t ebx_1 = 0
        int32_t* esi_1 = *(eax + 0x10)
        result = *(eax + 0x14)
        uint32_t ebp_4 = (result - esi_1 + 3) u>> 2
        
        if (esi_1 u> result)
            ebp_4 = 0
        
        if (ebp_4 != 0)
            do
                result = sub_42ccf0(arg2, *esi_1)
                ebx_1 += 1
                esi_1 = &esi_1[1]
            while (ebx_1 != ebp_4)
        
        edi = &edi[1]
    while (edi != result_1)

return result
