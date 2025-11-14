// 函数: sub_56fa50
// 地址: 0x56fa50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg2
int32_t* ebx = arg3
int32_t i = (edi - ebx) s>> 2

if (i s> 0x20)
    int32_t ebp_1 = arg4
    
    do
        if (ebp_1 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t eax_12 = (edi - ebx) & 0xfffffffc
            
            if (eax_12 s> 4)
                eax_12 = sub_56ff20(eax_12, edi, ebx, arg5.b)
            
            sub_570000(eax_12, edi, ebx, arg5)
            return 
        
        int32_t* var_c
        sub_56fbb0(arg1, ebx, &var_c, edi, arg5)
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = sx.q(ebp_1)
        int32_t ebp_3 = (eax_1 - edx_1) s>> 1
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = sx.q(ebp_3)
        ebp_1 = ebp_3 + ((eax_4 - edx_2) s>> 1)
        int32_t* var_8
        
        if (((var_c - ebx) & 0xfffffffc) s>= ((edi - var_8) & 0xfffffffc))
            arg1, arg3 = sub_56fa50(ebp_1, arg5)
            edi = var_c
        else
            arg1, arg3 = sub_56fa50(ebp_1, arg5)
            ebx = var_8
        
        i = (edi - ebx) s>> 2
    while (i s> 0x20)

if (i s<= 1)
    return 

int32_t* var_20_3 = arg3
int32_t var_24_3 = arg5
sub_570050(ebx, edi)
