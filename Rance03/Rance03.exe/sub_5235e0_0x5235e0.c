// 函数: sub_5235e0
// 地址: 0x5235e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg2
int32_t* ebx = arg3
int32_t i

for (i = (edi - ebx) s>> 2; i s> 0x20; i = (edi - ebx) s>> 2)
    if (arg4 s<= 0)
        if (i s<= 0x20)
            break
        
        void* eax_12 = (edi - ebx) & 0xfffffffc
        
        if (eax_12 s> 4)
            eax_12 = sub_523a70(eax_12, edi, ebx, arg5)
        
        sub_523b50(eax_12, edi, ebx, arg5)
        return 
    
    int32_t* var_10
    sub_5236d0(arg1, ebx, &var_10, edi, arg5)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = sx.q(arg4)
    int32_t esi_3 = (eax_1 - edx_1) s>> 1
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(esi_3)
    int32_t esi_4 = esi_3 + ((eax_4 - edx_2) s>> 1)
    arg4 = esi_4
    int32_t* var_c
    
    if (((var_10 - ebx) & 0xfffffffc) s>= ((edi - var_c) & 0xfffffffc))
        arg1, arg3 = sub_5235e0(esi_4, arg5)
        edi = var_10
    else
        arg1 = sub_5235e0(esi_4, arg5)
        arg3 = var_c
        ebx = arg3

if (i s<= 1)
    return 

int32_t* var_24_3 = arg3
int32_t var_28_3 = arg5
sub_523bb0(ebx, edi)
