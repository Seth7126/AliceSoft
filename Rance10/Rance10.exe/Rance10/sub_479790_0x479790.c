// 函数: sub_479790
// 地址: 0x479790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg2
char* eax_1 = (*(*ebx + 8))(arg3, arg4)
int32_t edi_1 = *(arg1 + 8)
char* esi = eax_1
char* edx_1 = *(edi_1 + (arg10 << 2))
int32_t ebp = *(edi_1 + ((0xff - arg10) << 2))
int32_t eax_3
eax_3.b = edx_1[arg9]
arg2.b = eax_3.b
int32_t eax_4
eax_4.b = edx_1[arg8]
arg4.b = eax_4.b
int32_t eax_5
eax_5.b = edx_1[arg7]
arg3.b = eax_5.b
int32_t eax_7
int16_t edx_2
eax_7, edx_2 = (*(*ebx + 0x1c))()
int32_t eax_8 = eax_7 - (arg5 << 2)
int32_t result = arg6

if (result s> 0)
    edx_2.b = arg2.b
    ebx.b = arg4.b
    edx_2:1.b = arg3.b
    int32_t ecx_3 = eax_8
    int32_t i
    
    do
        if (arg5 s> 0)
            int32_t j_1 = arg5
            int32_t j
            
            do
                *esi = *(zx.d(*esi) + ebp) + edx_2:1.b
                esi[1] = *(zx.d(esi[1]) + ebp) + ebx.b
                esi[2] = *(zx.d(esi[2]) + ebp) + edx_2.b
                esi = &esi[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = arg6
            ecx_3 = eax_8
        
        esi = &esi[ecx_3]
        i = result
        result -= 1
        arg6 = result
    while (i != 1)

return result
