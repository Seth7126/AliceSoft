// 函数: ?destroy_ptd@@YAXQAU__acrt_ptd@@@Z
// 地址: 0x714bda
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t** var_8 = arg1
int32_t* arg_4
int32_t* eax = arg_4
int32_t ecx = *eax

if (ecx != 0x7557c8)
    __free_base(ecx)
    eax = arg_4

__free_base(eax[0xf])
__free_base(arg_4[0xc])
__free_base(arg_4[0xd])
__free_base(arg_4[0xe])
__free_base(arg_4[0xa])
__free_base(arg_4[0xb])
__free_base(arg_4[0x10])
__free_base(arg_4[0x11])
__free_base(arg_4[0xd8])
var_8 = &arg_4
__acrt_lock_and_call<class <lambda_6250bd4b2a391816dd638c3bf72b0bcb> >(5, &var_8)
var_8 = &arg_4
return __acrt_lock_and_call<class <lambda_be2b3da3f62db62e9dad5dc70221a656> >(4, &var_8)
