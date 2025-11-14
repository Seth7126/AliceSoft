// 函数: sub_10017833
// 地址: 0x10017833
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_8 = arg3
int32_t var_14 = arg3
var_14.q = fconvert.d(fconvert.t(arg4))

if ((sub_100188c1(var_14, arg3) & 0x90) == 0)
    int32_t var_14_1 = arg3
    var_14_1.q = fconvert.d(fconvert.t(arg4))
    __frnd(var_14_1) - fconvert.t(arg4)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        int32_t var_10_2 = arg3
        int32_t var_14_2 = arg3
        int32_t var_c
        var_c.q = fconvert.d(fconvert.t(arg4) * fconvert.t(0.5))
        var_14_2.q = fconvert.d(fconvert.t(var_c.q))
        __frnd(var_14_2) - fconvert.t(var_c.q)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            return 1
        
        return 2

return 0
