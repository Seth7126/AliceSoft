// 函数: sub_684f10
// 地址: 0x684f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* lpText_1
int32_t var_8 = __security_cookie ^ &lpText_1

if (*(arg1 + 0xc) == 0)
    if (RegisterClassExA(*(arg1 + 4)).w == 0)
        sub_4216c0(arg1 + 0x10, 0x7036ac, &lpText_1, arg1 + 0x10)
        int32_t* lpText = &lpText_1
        int32_t var_c
        
        if (var_c u>= 0x10)
            lpText = lpText_1
        
        MessageBoxA(nullptr, lpText, "CWindow/addWindowClass/error", MB_OK)
        
        if (var_c u>= 0x10)
            j__free(lpText_1)
        
        enum MESSAGEBOX_RESULT eax_3
        eax_3.b = 0
        sub_69a5bc(var_8 ^ &lpText_1)
        return eax_3
    
    *(arg1 + 0xc) = 1

int32_t eax_1
eax_1.b = 1
sub_69a5bc(var_8 ^ &lpText_1)
return eax_1
