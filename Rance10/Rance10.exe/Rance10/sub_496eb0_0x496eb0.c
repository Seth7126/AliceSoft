// 函数: sub_496eb0
// 地址: 0x496eb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ff16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x14) = arg2
sub_497860(arg1, arg3)
uint32_t result = sub_497af0(arg1)
void* var_2c
uint32_t var_18
int32_t ebx

if (result.b != 0)
    sub_403360(&var_2c, (*(*(arg1 + 0x18) + 0xc))(eax_2))
    int32_t var_8_1 = 0
    int32_t var_8_2 = 0xffffffff
    ebx.b = sub_497b90(arg1, &var_2c) == 0
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)

if (result.b == 0 || ebx.b != 0)
    result.b = 0
else
    sub_403360(&var_2c, (*(*(arg1 + 0x18) + 4))())
    int32_t var_8_3 = 1
    sub_4987f0(arg1 + 0x134, &var_2c)
    int32_t var_8_4 = 0xffffffff
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    char var_74
    sub_403360(&var_74, (*(*(arg1 + 0x18) + 0x18))())
    int32_t var_8_5 = 2
    var_8_5.b = 3
    char var_8c
    char* eax_16 = (*(*(arg1 + 0x134) + 8))(sub_404f20(&var_8c, &var_74))
    void* var_a4
    sub_41a330(eax_16.b, eax_16, &var_a4)
    int32_t var_78
    
    if (var_78 u>= 0x10)
        sub_403160(var_8c.d, var_78 + 1, 1)
    
    int32_t var_78_1 = 0xf
    int32_t var_7c_1 = 0
    var_8c = 0
    var_8_5.b = 6
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74.d, var_60 + 1, 1)
    
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0
    sub_403590(&data_7fd454, &var_a4, 0, 0xffffffff)
    var_8_5.b = 7
    void* var_44
    sub_681030(sub_405320(&var_44, &var_a4))
    var_8_5.b = 6
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    sub_403360(&var_44, (*(*(arg1 + 0x134) + 8))())
    var_8_5.b = 8
    char* eax_26 = sub_404f20(&var_2c, &var_44)
    var_8_5.b = 9
    var_8_5.b = 0xa
    char var_5c
    sub_681030(sub_4176f0(eax_26.b, eax_26, &var_5c, "Screenshot"))
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    var_8_5.b = 6
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c.b = 0
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    int32_t eax_36 = (**(arg1 + 0xd4))()
    
    if (eax_36.b != 0)
        var_8_5.b = 0xb
        sub_681030(sub_4175e0(eax_36, &var_a4, &var_44, "Snapshot"))
        var_8_5.b = 6
        sub_403320(&var_44)
    
    void* var_bc
    sub_403360(&var_bc, (*(*(arg1 + 0x18) + 4))())
    var_8_5.b = 0xc
    sub_403590(&data_7fd4ac, &var_bc, 0, 0xffffffff)
    var_8_5.b = 6
    int32_t var_a8
    
    if (var_a8 u>= 0x10)
        sub_403160(var_bc, var_a8 + 1, 1)
    
    void* ebx_1
    struct win32only::CWindowCallback::mainwindow::CMainWindow::VTable** var_c0
    
    if (sub_6cdcd0(arg1 + 8, arg1 + 0x78) != 0)
        sub_4069a0()
        struct win32only::CWindowCallback::mainwindow::CMainWindow::VTable** eax_48 =
            sub_6e810c(0x2bc)
        var_c0 = eax_48
        var_8_5.b = 0xf
        struct win32only::CWindowCallback::mainwindow::CMainWindow::VTable** eax_49 =
            sub_49d3f0(eax_48, arg2)
        var_8_5.b = 6
        void* ecx_40
        
        if (eax_49 == 0)
            ecx_40 = nullptr
        else
            ecx_40 = &eax_49[1]
        
        *(arg1 + 0x128) = ecx_40
        
        if ((*(*ecx_40 + 8))(arg1).b == 0)
            ebx_1.b = 0
        else if (sub_4972e0(arg1, 1).b == 0)
            ebx_1.b = 0
        else
            int32_t* ecx_42 = *(arg1 + 0x128)
            *(arg1 + 0x10) = 1
            (*(*ecx_42 + 0x90))()
            ebx_1.b = 1
    else
        var_c0 = (*(*(arg1 + 0x18) + 4))()
        sub_403360(&var_44, 0x7608f4)
        var_8_5.b = 0xd
        var_8_5.b = 0xe
        sub_6c52e0(sub_409240(&var_c0, &var_44, &var_5c, &var_c0))
        sub_403320(&var_5c)
        sub_403320(&var_44)
        ebx_1.b = 0
    int32_t var_90
    
    if (var_90 u>= 0x10)
        sub_403160(var_a4, var_90 + 1, 1)
    
    result.b = ebx_1.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
