// 函数: sub_511050
// 地址: 0x511050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_28
void** result = __security_cookie ^ &var_28
void** result_1 = result

if (arg3 u<= 3)
    int32_t var_20
    result = sub_4058a0(sub_511120(arg1, &var_20, arg3), arg2)
    char var_21_1 = result.b
    int32_t var_c
    
    if (var_c u>= 0x10)
        j__free(var_20)
        result.b = var_21_1
    
    if (result.b == 0)
        char* ecx_2 = arg1[2] + arg3 * 0x18
        
        if (ecx_2 != arg2)
            sub_401ff0(ecx_2, arg2, 0, 0xffffffff)
        
        result = arg3 - 2
        
        if (arg3 == 2)
            int32_t* ecx_4 = arg1[8]
            
            if (ecx_4 != 0)
                result = (*(*ecx_4 + 4))()
                arg1[8] = 0
        else
            void** result_2 = result
            result -= 1
            
            if (result_2 == 1)
                int32_t* ecx_3 = arg1[9]
                
                if (ecx_3 != 0)
                    result = (*(*ecx_3 + 4))()
                    arg1[9] = 0
        
        if (arg2[4] != 0)
            result = sub_510150(arg1, arg2, arg3)

sub_69a5bc(result_1 ^ &var_28)
return result
