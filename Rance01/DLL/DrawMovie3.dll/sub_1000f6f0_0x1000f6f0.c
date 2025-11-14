// 函数: sub_1000f6f0
// 地址: 0x1000f6f0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* __saved_ebx_1 = arg3
int32_t ebp = 0
int32_t* var_8 = nullptr

if (__saved_ebx_1 != 0 && sub_10012860(__saved_ebx_1) == 0)
    int32_t* __saved_ebx = __saved_ebx_1
    return sub_1000f530(arg1, arg2)

int32_t result = 0x80040207

while (true)
    int32_t eax_4
    
    if (ebp != zx.d(*(arg1 + 0x26)))
        eax_4 = (*(arg1[3] + 0x30))(&arg1[3], &var_8)
    else
        eax_4 = (*(*arg2 + 0x30))(arg2, &var_8)
    
    if (eax_4 s>= 0)
        int32_t* var_1c_4 = var_8
        int32_t result_1 = sub_1000f5f0(arg2, __saved_ebx_1)
        int32_t* eax_7 = var_8
        (*(*eax_7 + 8))(eax_7)
        
        if (result_1 s>= 0)
            return 0
        
        if (result_1 != 0x80004005 && result_1 != 0x80070057 && result_1 != 0x8004022a)
            result = result_1
    
    ebp += 1
    
    if (ebp s>= 2)
        break
    
    __saved_ebx_1 = arg3

return result
