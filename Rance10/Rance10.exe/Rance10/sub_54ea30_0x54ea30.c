// 函数: sub_54ea30
// 地址: 0x54ea30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __saved_ebp_6 = data_7fcbbc
int32_t ebx

if (__saved_ebp_6 != 0)
    if (sub_63c080(__saved_ebp_6) != 0)
        ebx = (*(**(__saved_ebp_6 + 0x2c) + 0x50))()
    else
        ebx = 0
    
    __saved_ebp_6 = data_7fcbbc
    
    if (__saved_ebp_6 != 0)
        if (sub_63c080(__saved_ebp_6) != 0)
            __saved_ebp_6 = (*(**(__saved_ebp_6 + 0x2c) + 0x54))()
        else
            __saved_ebp_6 = nullptr
else
    ebx = 0

sub_54f960(arg1, ebx, __saved_ebp_6)
bool cond:0 = *arg1 == 0
void* const __saved_ebp_5 = __saved_ebp_6
int32_t var_4 = ebx
int32_t var_10 = 0
int32_t var_c = 0

if (not(cond:0))
    sub_54ee10(arg1, &var_c, &var_10, &var_4, &__saved_ebp_5)
    void* const __saved_ebp_4 = __saved_ebp_5
    int32_t ebx_1 = var_4
    void* const __saved_ebp_2 = __saved_ebp_4
    
    if (sub_54ed10(arg1, var_c, var_10, ebx_1) == 0)
        int32_t ebp_1 = var_10
        var_4 = var_c
        int32_t* eax_9 = sub_54e9a0(arg1)
        int32_t* ecx_8 = arg1[4]
        
        if (ecx_8 != 0)
            (*(*ecx_8 + 0x64))(eax_9, var_4, ebp_1, ebx_1, __saved_ebp_4, 0, 0, 0, 0)
    
    int32_t eax_10 = *arg1
    
    if (eax_10 != 0)
        arg1[5].b = 0
        *(eax_10 + 0x18) = 0

char eax_12 = sub_44ff30(sub_54e9a0(arg1))

if (eax_12 == 0)
    return eax_12

int32_t eax_13 = *arg1

if (eax_13 != 0)
    arg1[5].b = 1
    *(eax_13 + 0x18) = 1

eax_13.b = 1
return eax_13
