// 函数: sub_6979b0
// 地址: 0x6979b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t ebx = 0x270f
int32_t var_1c = 0x9c00
uint32_t ebp = 0x270f
char* lpDevMode = sub_69a5b3()
_memset(lpDevMode, 0, 0x9c00)
enum ENUM_DISPLAY_SETTINGS_MODE iModeNum = 0
enum ENUM_DISPLAY_SETTINGS_MODE iModeNum_1 = 0x270f

if (EnumDisplaySettingsA(nullptr, 0, lpDevMode) != 0)
    BOOL i
    
    do
        uint32_t eax_1 = *(lpDevMode + 0x6c)
        
        if (eax_1 u>= arg2)
            uint32_t ecx = *(lpDevMode + 0x70)
            
            if (ecx u>= arg3 && eax_1 u< ebx && ecx u< ebp)
                ebx = eax_1
                iModeNum_1 = iModeNum
                ebp = ecx
        
        iModeNum += 1
        i = EnumDisplaySettingsA(nullptr, iModeNum, lpDevMode)
    while (i != 0)
    
    if (iModeNum_1 != 0x270f && ebx != 0x270f && ebp != 0x270f)
        sub_6978e0(arg1, ebx, ebp, lpDevMode)
        *arg4 = ebx
        *arg5 = ebp
        j__free(lpDevMode)
        int32_t eax_5
        eax_5.b = 1
        return eax_5

j__free(lpDevMode)
int32_t eax_6
eax_6.b = 0
return eax_6
