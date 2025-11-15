// 函数: sub_6cfe70
// 地址: 0x6cfe70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_749079
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
int32_t var_14 = 0
arg1[4] = 0
arg1[5] = 0
arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0
char* eax_3

if (cond:0)
    eax_3 = arg1
else
    eax_3 = *arg1

*eax_3 = 0
int32_t var_8_1 = 0
int32_t var_14_1 = 1

if (sub_6d0050(5, 0) == 0)
    if (sub_6d0050(5, 1) == 0)
        char const* const var_24_1
        
        if (sub_6d0050(6, 0) == 0)
            if (sub_6d0050(6, 1) == 0)
                if (sub_6d0050(6, 2) == 0)
                    if (sub_6d0050(6, 3) == 0)
                        if (sub_6d0050(0xa, 0) == 0)
                            var_24_1 = &data_794418
                        else
                            var_24_1 = "Windows10 "
                    else
                        var_24_1 = "Windows8.1 "
                else
                    var_24_1 = "Windows8 "
            else
                var_24_1 = "Windows7 "
        else
            var_24_1 = "WindowsVista "
        
        sub_403450(var_24_1)
    else
        sub_403490(arg1, "WindowsXP ", 0xa)
else
    sub_403490(arg1, "Windows2000 ", 0xc)

if (sub_6d00d0(5) != 0)
    sub_407430(arg1, "SP5", 3)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

if (sub_6d00d0(4) != 0)
    sub_407430(arg1, "SP4", 3)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

void* const var_24_2

if (sub_6d00d0(3) == 0)
    if (sub_6d00d0(2) == 0)
        if (sub_6d00d0(1) == 0)
            if (sub_6d00d0(0) == 0)
                var_24_2 = &data_7943e8
            else
                var_24_2 = &data_75d7ee
        else
            var_24_2 = &data_794408
    else
        var_24_2 = &data_794404
else
    var_24_2 = &data_794400

sub_4073f0(var_24_2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
