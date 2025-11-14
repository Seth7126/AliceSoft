// 函数: sub_6978e0
// 地址: 0x6978e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (arg2 != GetSystemMetrics(SM_CXSCREEN))
label_697905:
    int32_t esi_1 = 0
    arg4->dmPelsHeight = arg3
    arg4->dmFields = 0x180000
    arg4->dmPelsWidth = arg2
    
    while (true)
        result = ChangeDisplaySettingsA(arg4, CDS_FULLSCREEN)
        
        if (result == 0)
            *(arg1 + 8) = 1
            *(arg1 + 0xc) = 1
            break
        
        esi_1 += 1
        
        if (esi_1 s>= 3)
            return result
else
    result = GetSystemMetrics(SM_CYSCREEN)
    
    if (arg3 != result)
        goto label_697905

return result
