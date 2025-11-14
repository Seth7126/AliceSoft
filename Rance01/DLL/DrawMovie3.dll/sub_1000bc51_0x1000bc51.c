// 函数: sub_1000bc51
// 地址: 0x1000bc51
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_c = edi
enum WIN32_ERROR edi_2

if (sub_1000b0f9(arg1) == 0xffffffff)
    edi_2 = NO_ERROR
else
    void* eax_1 = data_10023540
    
    if ((arg1 != 1 || (*(eax_1 + 0x84) & 1) == 0) && (arg1 != 2 || (*(eax_1 + 0x44) & 1) == 0))
    label_1000bca3:
        
        if (CloseHandle(sub_1000b0f9(arg1)) != 0)
            edi_2 = NO_ERROR
        else
            edi_2 = GetLastError()
    else
        int32_t eax_2 = sub_1000b0f9(2)
        
        if (sub_1000b0f9(1) != eax_2)
            goto label_1000bca3
        
        edi_2 = NO_ERROR

sub_1000b073(arg1)
*((&data_10023540)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 4) = 0

if (edi_2 == NO_ERROR)
    return 0

___acrt_errno_map_os_error(edi_2)
return 0xffffffff
