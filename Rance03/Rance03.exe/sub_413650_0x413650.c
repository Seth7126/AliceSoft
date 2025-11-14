// 函数: sub_413650
// 地址: 0x413650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3cb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_bc
int32_t eax_2 = __security_cookie ^ &var_bc
int32_t edi
int32_t var_cc = edi
int32_t eax_4 = __security_cookie ^ &var_cc
fsbase->NtTib.ExceptionList = &ExceptionList
var_bc = arg1
void* eax_5 = arg1[0x18]
BOOL result

if (eax_5 == arg1[0x19])
label_4136d6:
    int32_t var_4 = 0
    struct dpanalysis::CBreakPoint::VTable* var_80
    sub_413a60(&arg1[0x18], sub_4051f0(&var_80, arg2, arg3, arg4))
    int32_t var_4_1 = 0xffffffff
    sub_4052d0(&var_80)
    void* eax_7 = arg1[0x18]
    int32_t esi_1 = arg1[0x19]
    arg1[0x1b] = 0
    
    if (eax_7 != esi_1)
        int32_t ecx_4 = 0
        
        do
            int32_t edx_1 = *(eax_7 + 0x64)
            
            if (ecx_4 s< edx_1)
                ecx_4 = edx_1
                arg1[0x1b] = ecx_4
            
            eax_7 += 0x6c
        while (eax_7 != esi_1)
    
    HWND edi_2 = arg1[3]
    int32_t eax_8 = GetScrollPos(edi_2, SB_HORZ)
    SCROLLINFO lpsi
    lpsi.cbSize = 0x1c
    lpsi.fMask = 7
    lpsi.nMin = 0
    lpsi.nMax = (*(*arg1 + 0x94))(eax_4) - 1
    lpsi.nPage = 0
    lpsi.nPos = eax_8
    SetScrollInfo(edi_2, SB_HORZ, &lpsi, 1)
    HWND edi_4 = var_bc[3]
    int32_t eax_11 = GetScrollPos(edi_4, SB_VERT)
    int32_t* ebp = var_bc
    SCROLLINFO lpsi_1
    lpsi_1.cbSize = 0x1c
    lpsi_1.fMask = 7
    lpsi_1.nMin = 0
    int32_t eax_13 = (*(*ebp + 0x90))() - 1
    lpsi_1.nPage = 0
    lpsi_1.nMax = eax_13
    lpsi_1.nPos = eax_11
    SetScrollInfo(edi_4, SB_VERT, &lpsi_1, 1)
    InvalidateRect(ebp[3], nullptr, 1)
    result = UpdateWindow(ebp[3])
else
    while (*(eax_5 + 4) != arg2 || *(eax_5 + 8) != arg3)
        eax_5 += 0x6c
        
        if (eax_5 == arg1[0x19])
            goto label_4136d6
    
    int32_t* var_d4_3 = var_bc
    sub_413d80(eax_5, arg1[0x19], eax_5 + 0x6c, eax_5)
    void* ebp_1 = arg1[0x19]
    
    for (int32_t* i = ebp_1 - 0x6c; i != ebp_1; i = &i[0x1b])
        (**i)(0)
    
    arg1[0x19] -= 0x6c
    HWND hWnd = arg1[3]
    arg1[0x1c] = 0xffffffff
    result = InvalidateRect(hWnd, nullptr, 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_bc)
return result
