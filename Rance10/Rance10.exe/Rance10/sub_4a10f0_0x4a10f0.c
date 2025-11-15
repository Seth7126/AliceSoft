// 函数: sub_4a10f0
// 地址: 0x4a10f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730f28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[9].b = 0
arg1[0xad] = arg2
int32_t* hWnd = (**arg2)(0x760e0c)
HWND result

if (hWnd != 0)
    sub_4a6690(&arg1[0x1c])
    void* var_44
    sub_403360(&var_44, (*(*hWnd + 4))(eax_2))
    int32_t var_8_1 = 0
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, "AliceRunWindowClass", 0x13)
    var_8_1.b = 1
    char* ecx_6 = arg1[3] + 0x30
    
    if (ecx_6 != &var_2c)
        sub_403590(ecx_6, &var_2c, 0, 0xffffffff)
    
    var_8_1.b = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    *(arg1[3] + 0x68) = 0x20f0000
    *(arg1[3] + 0x18) = LoadIconA(arg1[4], 0x65)
    char* ecx_9 = arg1[3] + 0x48
    
    if (ecx_9 != &var_44)
        sub_403590(ecx_9, &var_44, 0, 0xffffffff)
    
    *(arg1[3] + 0x60) = arg1[4]
    *(arg1[3] + 0x84) = &arg1[-1]
    int32_t eax_12 = 0
    void* ecx_11
    ecx_11.b = arg1[0x1e].b
    
    if (ecx_11.b != 0)
        eax_12 = 2
    
    *(arg1[0x90] + 4) = eax_12
    float xmm0_1 = arg1[0x26]
    float xmm0_5 = sub_49d390(_mm_cvtepi32_ps(zx.o((*(*hWnd + 0x24))())) * xmm0_1)
    float xmm0_9 = sub_49d390(_mm_cvtepi32_ps(zx.o((*(*hWnd + 0x20))())) * xmm0_1)
    int32_t ecx_14 = int.d(fconvert.t(xmm0_5))
    struct common::CSize::VTable* const var_58 = &common::CSize::`vftable'
    int32_t eax_17 = int.d(xmm0_9)
    int32_t var_50_1 = ecx_14
    var_8_1.b = 2
    arg1[0x12] = ecx_14
    arg1[0x11] = eax_17
    int32_t eax_19 = (*(*hWnd + 0x2c))()
    int32_t eax_20 = (*(*hWnd + 0x28))()
    arg1[0x15] = eax_19
    int32_t esi_2 = int.d(fconvert.t(xmm0_5))
    arg1[0x14] = eax_20
    arg1[0x17] = eax_17
    arg1[0x18] = esi_2
    arg1[0x4a] = eax_17
    arg1[0x4b] = esi_2
    
    if (arg1[0x43] != 0)
        (*(*arg1[0x43] + 0x24))(eax_17, esi_2)
    
    sub_49da00(&arg1[-1], &var_58)
    
    if (sub_6ced40(arg1[3]).b == 0)
        hWnd.b = 0
    else
        int32_t eax_23 = (*(*arg1 + 0x38))()
        bool cond:1_1 = arg1[0x74] == 0
        data_7fcbe0 = eax_23
        
        if (not(cond:1_1))
            *(*(arg1[0x74] + 8) + 4) = (*(*hWnd + 0x1c))()
            sub_47d910(*(arg1[0x74] + 8), *arg1[3], arg1[4])
        
        hWnd = *arg1[3]
        uint32_t uIDEvent = arg1[0x98]
        
        if (uIDEvent != 0)
            KillTimer(arg1[0x99], uIDEvent)
            arg1[0x98] = 0
        
        arg1[0x99] = hWnd
        arg1[0x98] = SetTimer(hWnd, 1, 0xc8, nullptr)
        arg1[0x70] = *arg1[3]
        GetWindowThreadProcessId(*arg1[3], &arg1[5])
        arg1[0x92] = LoadAcceleratorsA(arg1[4], 0x67)
        int32_t* eax_36 = (**arg1[0xad])(0x760ebc)
        
        if (eax_36 != 0 && (**eax_36)() != 0)
            DragAcceptFiles(*arg1[3], 1)
        
        int32_t eax_41 = Concurrency::details::ThreadScheduler::CreateVirtualProcessor(0)
        
        if (eax_41 == 1 || eax_41 == 2)
            (*(*arg1 + 0x78))()
        
        ShowWindow(*arg1[3], SW_SHOW)
        UpdateWindow(*arg1[3])
        arg1[0x7d].b = 1
        int32_t eax_45
        eax_45.b = arg1[0x20].b != 0
        (*arg1[0x44])(1, eax_45)
        arg1[0xe].b = 1
        hWnd.b = 1
    
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    result.b = hWnd.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
