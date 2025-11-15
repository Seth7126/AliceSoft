// 函数: sub_656d40
// 地址: 0x656d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_1 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
void* ecx = *(arg1 + 0x1bc)
int32_t i_2 = *(arg1 + 0x5c)
int32_t eax_1 = *(arg1 + 0x12c)
int32_t eax_2 = *(ecx + 8)
int32_t eax_3 = *(ecx + 0xc)
int32_t eax_4 = *(ecx + 0x10)
void* result = *(ecx + 0x14)
int32_t i_3 = i_2
void* result_1 = result
arg5 = edx_1

if (not(cond:0))
    int32_t* ebx_1 = arg4
    int32_t ebp_1 = arg3 << 2
    int32_t temp1_1
    
    do
        void* esi_1 = *ebx_1
        ebx_1 = &ebx_1[1]
        void* eax_7 = *(*arg2 + ebp_1)
        result = *(arg2[1] + ebp_1)
        int32_t ecx_3 = *(arg2[2] + ebp_1)
        ebp_1 += 4
        
        if (i_2 != 0)
            void* ebx_2 = esi_1 + 2
            void* ebp_3 = eax_7 - result
            int32_t i_1 = i_2
            void* ecx_4 = ecx_3 - result
            arg1 = ebp_3
            void* var_c_1 = ecx_4
            int32_t i
            
            do
                uint32_t ecx_5 = zx.d(*(ecx_4 + result))
                ebx_2 += 3
                uint32_t edi = zx.d(*(result + ebp_3))
                result += 1
                uint32_t esi_2 = zx.d(*(result - 1))
                uint32_t edx_2 = ecx_5 << 2
                *(ebx_2 - 5) = (*(edx_2 + eax_2) + edi)[eax_1]
                ebp_3 = arg1
                *(ebx_2 - 4) =
                    *(((*(result_1 + (esi_2 << 2)) + *(edx_2 + eax_4)) s>> 0x10) + edi + eax_1)
                i = i_1
                i_1 -= 1
                *(ebx_2 - 3) = (*(eax_3 + (esi_2 << 2)) + edi)[eax_1]
                ecx_4 = var_c_1
            while (i != 1)
            edx_1 = arg5
            i_2 = i_3
        
        temp1_1 = edx_1
        edx_1 -= 1
        arg5 = edx_1
    while (temp1_1 - 1 s>= 0)

return result
