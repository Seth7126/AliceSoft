// 函数: sub_68a0d0
// 地址: 0x68a0d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax_1 = (*(*arg2 + 8))(0, 0)
int32_t esi = *(arg1 + 0x18)
void* ebx = eax_1
int32_t eax_2 = (*(*arg2 + 0x1c))()
int32_t i = 0
int32_t esi_1 = *(arg1 + 0x18)
char* result = eax_2 - (esi << 2)
arg2 = result
arg4 -= esi_1 << 2

if (*(arg1 + 0x1c) s> 0)
    result = arg3
    int32_t* ecx_4 = arg2
    
    do
        int32_t edx_1 = 0
        
        if (esi_1 s> 0)
            do
                edx_1 += 1
                *ebx = *result
                *(ebx + 1) = result[1]
                *(ebx + 2) = result[2]
                char ecx_8 = result[3]
                result = &result[4]
                *(ebx + 3) = ecx_8
                ebx += 4
                esi_1 = *(arg1 + 0x18)
            while (edx_1 s< esi_1)
            
            ecx_4 = arg2
        
        result = &result[arg4]
        i += 1
        ebx += ecx_4
    while (i s< *(arg1 + 0x1c))

return result
