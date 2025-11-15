// 函数: ?shortsort@@YAXPAD0IP6AHPBX1@Z@Z
// 地址: 0x70ca90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result
int32_t ecx_1 = arg1
char* ebx = arg2

if (ebx u> ecx_1)
    result = arg3
    int32_t edi
    int32_t var_14_1 = edi
    int32_t edx_1 = ecx_1 + result
    
    do
        int32_t esi_1 = edx_1
        int32_t edi_1 = ecx_1
        
        if (esi_1 u<= ebx)
            do
                if (arg4(esi_1, edi_1) s> 0)
                    edi_1 = esi_1
                
                result = arg3
                esi_1 += result
            while (esi_1 u<= ebx)
            
            ecx_1 = arg1
        
        int32_t esi_2 = result
        char* edx_2 = ebx
        
        if (edi_1 != ebx && result != 0)
            void* edi_2 = edi_1 - ebx
            int32_t i
            
            do
                result.b = *edx_2
                edx_2 = &edx_2[1]
                ecx_1.b = *(edi_2 + edx_2 - 1)
                *(edi_2 + edx_2 - 1) = result.b
                edx_2[0xffffffff] = ecx_1.b
                i = esi_2
                esi_2 -= 1
            while (i != 1)
            result = arg3
            ecx_1 = arg1
        
        ebx -= result
        edx_1 = ecx_1 + result
    while (ebx u> ecx_1)

@__security_check_cookie@4(result_1 ^ &__saved_ebp)
return result
