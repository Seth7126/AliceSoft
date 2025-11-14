// 函数: sub_5e4f80
// 地址: 0x5e4f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HINSTANCE hInstance
int32_t eax_2 = __security_cookie ^ &hInstance
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
hInstance = arg2
*(arg1 + 0x10) = arg2
*(arg1 + 0x20) = 0
*(arg1 + 0x3c) = 0
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, "AliceRunWindowClass", 0x13)
int32_t var_4 = 0
char* ecx_2 = *(arg1 + 0xc) + 0x30

if (ecx_2 != &var_28)
    sub_401ff0(ecx_2, &var_28, 0, 0xffffffff)

int32_t var_4_1 = 0xffffffff

if (var_14 u>= 0x10)
    j__free(var_28.d)

void* eax_5 = *(arg1 + 0xc)

if (*(arg1 + 0x3c) == 0)
    *(eax_5 + 0x68) = 0x20f0000
else
    *(eax_5 + 0x68) = 0x40000000
    *(*(arg1 + 0xc) + 0x7c) = 0

if (*(arg1 + 0x3c) == 0)
    *(*(arg1 + 0xc) + 0x18) = LoadIconA(arg2, 0x66)

char* ecx_5 = *(arg1 + 0xc) + 0x48

if (ecx_5 != arg5)
    sub_401ff0(ecx_5, arg5, 0, 0xffffffff)

*(*(arg1 + 0xc) + 0x60) = arg2
*(*(arg1 + 0xc) + 0x84) = arg1

if (arg1 + 0x258 != arg6)
    sub_401ff0(arg1 + 0x258, arg6, 0, 0xffffffff)

sub_5eb690(arg1 + 0x58, arg6)
sub_5eba20(arg1 + 0x58, arg6)
int32_t ecx_9 = 0

if (*(arg1 + 0x5c) != 0)
    ecx_9 = 2

*(*(arg1 + 0x21c) + 4) = ecx_9
*(arg1 + 0x40) = arg3
*(arg1 + 0x44) = arg4
*(arg1 + 0x48) = arg3
*(arg1 + 0x4c) = arg4
*(arg1 + 0xfc) = arg3
*(arg1 + 0x100) = arg4
int32_t eax_12 = GetSystemMetrics(SM_CYCAPTION)
int32_t eax_13 = GetSystemMetrics(SM_CYMENU)
int32_t eax_14 = GetSystemMetrics(SM_CXFRAME)
int32_t edx_2 = eax_13 + (GetSystemMetrics(SM_CYFRAME) << 1) + eax_12 + arg4
void* ecx_11 = *(arg1 + 0xc)
*(ecx_11 + 0x6c) = 0
*(ecx_11 + 0x70) = 0
*(ecx_11 + 0x74) = arg3 + (eax_14 << 1)
*(ecx_11 + 0x78) = edx_2
char result = sub_698a60(*(arg1 + 0xc))

if (result != 0)
    void* ecx_13 = *(arg1 + 0x1a0)
    int32_t eax_19 = **(arg1 + 0xc)
    data_75d54c = eax_19
    
    if (ecx_13 != 0)
        sub_46ce10(*(ecx_13 + 4), eax_19, *(arg1 + 0x10))
    
    HWND hWnd = **(arg1 + 0xc)
    uint32_t uIDEvent = *(arg1 + 0x23c)
    
    if (uIDEvent != 0)
        KillTimer(*(arg1 + 0x240), uIDEvent)
        *(arg1 + 0x23c) = 0
    
    *(arg1 + 0x240) = hWnd
    *(arg1 + 0x23c) = SetTimer(hWnd, 1, 0xc8, nullptr)
    HWND* ecx_15 = *(arg1 + 0xc)
    *(arg1 + 0x190) = *ecx_15
    GetWindowThreadProcessId(*ecx_15, arg1 + 0x1c)
    
    if (*(arg1 + 0x3c) == 0)
        *(arg1 + 0x224) = LoadAcceleratorsA(hInstance, 0x67)
        
        if (*(arg1 + 0x3c) == 0)
            sub_5e5300(arg1, 0)
    
    ShowWindow(**(arg1 + 0xc), SW_SHOW)
    UpdateWindow(**(arg1 + 0xc))
    *(arg1 + 0x1c4) = *(arg1 + 0x3c) == 0
    int32_t eax_28
    eax_28.b = *(arg1 + 0x64) != 0
    (**(arg1 + 0xe8))(1, eax_28)
    
    if (*(arg1 + 0x3c) != 0)
        *(arg1 + 0x38) = 1
    
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &hInstance)
return result
