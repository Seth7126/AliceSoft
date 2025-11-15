// 函数: __close_nolock
// 地址: 0x7131d3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_c = edi
enum WIN32_ERROR esi_2

if (__get_osfhandle(arg1) != 0xffffffff)
    void* eax_1 = data_7fc718
    
    if ((arg1 != 1 || (*(eax_1 + 0x88) & 1) == 0) && (arg1 != 2 || (*(eax_1 + 0x58) & 1) == 0))
    label_713229:
        
        if (CloseHandle(__get_osfhandle(arg1)) != 0)
            esi_2 = NO_ERROR
        else
            esi_2 = GetLastError()
    else
        int32_t eax_2 = __get_osfhandle(2)
        
        if (__get_osfhandle(1) != eax_2)
            goto label_713229
        
        esi_2 = NO_ERROR
else
    esi_2 = NO_ERROR

__free_osfhnd(arg1)
*((&data_7fc718)[arg1 s>> 6] + (arg1 & 0x3f) * 0x30 + 0x28) = 0

if (esi_2 == NO_ERROR)
    return 0

___acrt_errno_map_os_error(esi_2)
return 0xffffffff
