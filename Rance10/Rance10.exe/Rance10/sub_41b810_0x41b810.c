// 函数: sub_41b810
// 地址: 0x41b810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_28
int32_t eax_1 = __security_cookie ^ &var_28

if (sub_41ac20(arg2, 0x75d128) != 0)
    int32_t var_10_1 = 0xf
    int32_t var_14_1 = 0
    char var_24 = 0
    sub_403490(&var_24, "DP\DPLogViewer.exe", 0x12)
    char* lpFileName = &var_24
    
    if (var_10_1 u>= 0x10)
        lpFileName = var_24.d
    
    uint32_t eax_3 = GetFileAttributesA(lpFileName)
    uint32_t ebx_1
    
    if (eax_3 != 0xffffffff)
        ebx_1.b = not.b((eax_3 u>> 4).b)
        ebx_1.b &= 1
    else
        ebx_1.b = 0
    
    if (var_10_1 u>= 0x10)
        sub_403160(var_24.d, var_10_1 + 1, 1)
    
    if (ebx_1.b != 0)
        int32_t result = *(arg1 + 0x10)
        @__security_check_cookie@4(eax_1 ^ &var_28)
        return result

@__security_check_cookie@4(eax_1 ^ &var_28)
return 0
