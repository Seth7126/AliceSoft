// 函数: sub_49f080
// 地址: 0x49f080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HWND hWnd
int32_t* lParam

if (*(arg1 + 0x40) == 0 && (*(*(arg1 + 4) + 0x74))() == 0 && *(arg1 + 0x60) s> 0
        && *(arg1 + 0x64) s> 0)
    int32_t* lParam_3 = lParam
    int32_t* lParam_1 = *lParam_3
    HWND hWnd_1 = lParam_3[2]
    int32_t ebp = lParam_3[3]
    lParam = lParam_1
    int32_t eax_4 = lParam_3[1]
    hWnd = hWnd_1
    int32_t var_10 = eax_4
    int32_t var_c = ebp
    int32_t eax_5 = GetSystemMetrics(SM_YVIRTUALSCREEN)
    
    if (eax_4 s< eax_5)
        var_10 = eax_5
        var_c = ebp + eax_5 - eax_4
    
    int32_t lParam_2 = GetSystemMetrics(SM_XVIRTUALSCREEN)
    
    if (lParam_1 s< lParam_2)
        lParam = lParam_2
        hWnd = hWnd_1 + lParam_2 - lParam_1
    
    sub_49eec0(arg1, &lParam, &hWnd, &var_10, &var_c, arg2)
    *lParam_3 = lParam
    lParam_3[2] = hWnd
    lParam_3[1] = var_10
    lParam_3[3] = var_c
    return 1

return DefWindowProcA(hWnd, 0x214, arg2, lParam)
