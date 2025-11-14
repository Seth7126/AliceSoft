// 函数: sub_57af30
// 地址: 0x57af30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_57b010(arg1)
void** var_10

if (arg1 + 0x70 != arg6)
    var_10 = arg6
    sub_401ff0(arg1 + 0x70, var_10, 0, 0xffffffff)

struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_57b9d0(arg1, arg2, arg3).b != 0)
    if (sub_5829f0(arg1 + 0x30) != 0)
        sub_57d340(arg1)
    
    if (arg4 != 0 && arg5 s> 0)
        sub_57b0c0(arg1, arg4, arg5)
    
    int32_t var_8_2 = arg8
    int32_t var_c_2 = arg7
    result = sub_57d6f0(arg1)
    
    if (result.b != 0)
        void** edx_1 = *(arg1 + 0x50)
        int32_t* ecx_7 = *(arg1 + 0x4c)
        
        if (ecx_7 != edx_1)
            int32_t var_8_3 = 0
            sub_57fc10(result, edx_1, ecx_7, var_10)
        
        if (arg9 != 0)
            sub_57def0(arg1)
        
        result = *(arg1 + 0x4c)
        int32_t edx_2 = *(arg1 + 0x50)
        
        if (result == edx_2)
            result.b = 1
            return result
        
        while ((*result)->__offset(0x68).b == 0)
            result = &result[1]
            
            if (result == edx_2)
                result.b = 1
                return result
        
        if (sub_53c030(arg1 + 0x9c, arg1).b != 0)
            result.b = 1
            return result

result.b = 0
return result
