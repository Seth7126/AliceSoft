// 函数: sub_6fa128
// 地址: 0x6fa128
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

SLIST_HEADER* var_8 = arg1
int32_t edx = arg3
arg1->__offset(0x24).d = arg2
arg1->__offset(0x44).d = arg4
arg1->__offset(0x10).d = 0
arg1->__offset(0x2c).d = 0
arg1->__offset(0x30).d = 0
arg1->__offset(0x38).d = 0x200
arg1->__offset(0x3c).d = 1
arg1->__offset(0x40).d = 0
arg1->__offset(0x48).d = 0

if ((edx & (edx - 1)) != 0)
    int32_t edx_1 = edx | edx s>> 1
    int32_t edx_2 = edx_1 | edx_1 s>> 2
    int32_t edx_3 = edx_2 | edx_2 s>> 4
    int32_t edx_4 = edx_3 | edx_3 s>> 8
    edx = (edx_4 | edx_4 s>> 0x10) + 1

arg1->__offset(0x28).d = edx
int32_t ecx
ecx.b = mulu.dp.d(edx, 4) u>> 0x20 != 0
int32_t var_18 = neg.d(ecx) | (edx * 4)
uint32_t (* eax_15)[0x4] = sub_6e8787()
_memset(eax_15, 0, arg1->__offset(0x28).d << 2)
uint32_t (** eax_16)[0x4] = sub_6e810c(0xc)
uint32_t (** var_8_1)[0x4] = eax_16

if (eax_16 == 0)
    eax_16 = nullptr
else
    eax_16[2] = 0xffffffff
    *eax_16 = eax_15
    eax_16[1] = 0

arg1->__offset(0x30).d = eax_16
int32_t eax_17 = arg1->__offset(0x38).d
int32_t ecx_5
ecx_5.b = mulu.dp.d(eax_17, 4) u>> 0x20 != 0
int32_t var_18_1 = neg.d(ecx_5) | (eax_17 * 4)
int32_t* eax_19 = sub_6e8787()
int32_t ecx_8 = arg1->__offset(0x30).d
arg1->__offset(0x34).d = eax_19
*eax_19 = ecx_8
InitializeSListHead(arg1)
InitializeSListHead(&arg1[1])
int32_t i = arg1->__offset(0x28).d s>> 1

if (i != 0)
    int32_t eax_21 = arg1->__offset(0x2c).d
    
    do
        eax_21 += 1
        i s>>= 1
    while (i != 0)
    
    arg1->__offset(0x2c).d = eax_21

return arg1
