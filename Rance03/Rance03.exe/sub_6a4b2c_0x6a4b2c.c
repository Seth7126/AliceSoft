// 函数: sub_6a4b2c
// 地址: 0x6a4b2c
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

enum WIN32_ERROR esi_2

if (sub_6a3dbc(arg1) == 0xffffffff)
    esi_2 = NO_ERROR
else
    void* eax_1 = data_75ca40
    
    if ((arg1 != 1 || (*(eax_1 + 0x84) & 1) == 0) && (arg1 != 2 || (*(eax_1 + 0x44) & 1) == 0))
    label_6a4b7c:
        
        if (CloseHandle(sub_6a3dbc(arg1)) != 0)
            esi_2 = NO_ERROR
        else
            esi_2 = GetLastError()
    else
        int32_t eax_2 = sub_6a3dbc(2)
        
        if (sub_6a3dbc(1) != eax_2)
            goto label_6a4b7c
        
        esi_2 = NO_ERROR

sub_6a3d36(arg1)
*((&data_75ca40)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 4) = 0

if (esi_2 == NO_ERROR)
    return 0

__dosmaperr(esi_2)
return 0xffffffff
