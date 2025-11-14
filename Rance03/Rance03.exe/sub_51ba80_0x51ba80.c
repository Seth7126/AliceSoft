// 函数: sub_51ba80
// 地址: 0x51ba80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_20
void* result = __security_cookie ^ &var_20
void* result_1 = result

if (*(arg1 + 0xec) != 0)
    int32_t var_30_1 = 1
    result = sub_4294e0(arg1 + 0xdc, U"\n\n ", arg1)
    
    if (result != 0xffffffff)
        char* eax_2 = sub_403070(arg1 + 0xdc, &var_20, result + 1, 0xffffffff)
        
        if (arg1 + 0xdc != eax_2)
            if (*(arg1 + 0xf0) u>= 0x10)
                j__free(*(arg1 + 0xdc))
            
            *(arg1 + 0xf0) = 0xf
            *(arg1 + 0xec) = 0
            *(arg1 + 0xdc) = 0
            sub_4030b0(arg1 + 0xdc, eax_2)
        
        int32_t var_c
        
        if (var_c u>= 0x10)
            j__free(var_20)
        
        result = sub_519640(arg1)

sub_69a5bc(result_1 ^ &var_20)
return result
