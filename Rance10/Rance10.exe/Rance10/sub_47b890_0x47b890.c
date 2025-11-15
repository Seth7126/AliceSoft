// 函数: sub_47b890
// 地址: 0x47b890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
char* esi = (*(*arg3 + 8))(arg2, arg4)
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q((*(*arg3 + 0x18))())
int32_t eax_6 = (*(*arg3 + 0x1c))() - (((edx & 7) + eax_4) s>> 3) * arg8
void* ebp = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_9
int32_t edx_5
edx_5:eax_9 = sx.q((*(*arg5 + 0x18))())
int32_t i_1 = arg9
int32_t* result = (*(*arg5 + 0x1c))() - (((edx_5 & 7) + eax_9) s>> 3) * arg8
arg5 = result

if (i_1 s> 0)
    result = arg8
    int32_t edx_8 = eax_6
    int32_t* ebx_2 = arg5
    int32_t i
    
    do
        if (result s> 0)
            int32_t* ebx_3 = result
            int32_t* j
            
            do
                uint32_t edi_6 = zx.d(*(ebp + 3))
                void* ecx_5 = ebp
                uint32_t eax_12 = zx.d(esi[1])
                *esi += (((zx.d(*ebp) - zx.d(*esi)) * edi_6) s>> 8).b
                uint32_t eax_13 = zx.d(esi[2])
                esi[1] += (((zx.d(*(ebp + 1)) - eax_12) * edi_6) s>> 8).b
                esi[2] += (((zx.d(*(ebp + 2)) - eax_13) * edi_6) s>> 8).b
                
                if (*(ebp + 3) u< esi[3])
                    ecx_5 = esi
                
                ebp += 4
                esi[3] = *(ecx_5 + 3)
                esi = &esi[4]
                j = ebx_3
                ebx_3 -= 1
            while (j != 1)
            result = arg8
            i_1 = arg9
            edx_8 = eax_6
            ebx_2 = arg5
        
        esi = &esi[edx_8]
        ebp += ebx_2
        i = i_1
        i_1 -= 1
        arg9 = i_1
    while (i != 1)

return result
