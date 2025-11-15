// 函数: sub_6cd890
// 地址: 0x6cd890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (arg2 != GetSystemMetrics(SM_CXSCREEN))
label_6cd8b5:
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
        goto label_6cd8b5

return result
