// 函数: sub_415a60
// 地址: 0x415a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg3[1]

for (void* i = *arg3; i != edi; i += 0x7c)
    sub_40ad50(i)

arg3[1] = *arg3

if (arg4 != 0 && arg7 s< 4)
    int32_t* esi = (*(*arg4 + 4))(arg5)
    int32_t* var_4_1 = esi
    
    if (esi != 0)
        int32_t eax_4
        int32_t edx
        edx:eax_4 = sx.q((*(*esi + 0x14))())
        int32_t ebx_1 = ((edx & 3) + eax_4) s>> 2
        sub_416c30(arg3, ebx_1)
        int32_t edi_1 = 0
        
        if (ebx_1 s> 0)
            int32_t ebx_2 = 0
            int32_t var_14_1 = 0
            
            do
                int32_t eax_7 = (*(*esi + 0x18))()
                void* esi_2 = *arg3 + ebx_2
                int32_t* ebx_3 = *(arg6 + 0x1c)
                int32_t eax_10
                int32_t edx_2
                edx_2:eax_10 = muls.dp.d(0x66666667, *(arg6 + 0x20) - ebx_3)
                int32_t edx_3 = edx_2 s>> 4
                
                if (edx_3 u>> 0x1f == neg.d(edx_3))
                    sub_6d0947("invalid vector<T> subscript")
                    noreturn
                
                *(esi_2 + 4) = *ebx_3
                
                if (esi_2 + 8 != &ebx_3[1])
                    sub_403590(esi_2 + 8, &ebx_3[1], 0, 0xffffffff)
                
                sub_416df0(esi_2 + 0x20, &ebx_3[7])
                sub_415460(esi_2, eax_7 + (edi_1 << 2), arg5, edi_1, arg2, arg4, arg7 + 1)
                edi_1 += 1
                esi = var_4_1
                ebx_2 = var_14_1 + 0x7c
                var_14_1 = ebx_2
            while (edi_1 s< ebx_1)
        
        char* eax_5
        eax_5.b = 1
        return eax_5

int32_t* eax
eax.b = 0
return eax
