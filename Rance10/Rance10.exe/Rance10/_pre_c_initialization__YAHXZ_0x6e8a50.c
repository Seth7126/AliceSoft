// 函数: ?pre_c_initialization@@YAHXZ
// 地址: 0x6e8a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__initp_misc_purevirt(2)
__set_fmode(0x4000)
data_7fc70c = 0

if (___scrt_initialize_onexit_tables(1) != 0)
    __fnclex()
    sub_6e941f()
    _atexit(sub_6e944a)
    int32_t var_8_1 = 1
    
    if (sub_710b36() == 0)
        sub_6e93bd()
        
        if (sub_6e9407() != 0)
            ___setusermatherr(sub_40d500)
        
        __initialize_default_precision()
        __configthreadlocale(0)
        
        if (sub_41b6c0() != 0)
            j_sub_710b70()
        
        return 0

sub_6e911b(7)
breakpoint
