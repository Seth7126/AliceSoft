// 函数: sub_437240
// 地址: 0x437240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t edx = 0
uint32_t esi_1 = *arg1 u>> 4
uint32_t ebx_1 = modu.dp.d(edx:arg2, esi_1) << 4
uint32_t ebp_1 = divu.dp.d(edx:arg2, esi_1) << 4

switch (((arg5 & 1) * 2) | (arg4 & 1))
    case 0
        sub_437d40(arg1, ebx_1, ebp_1, arg3, arg4, arg5)
    case 1
        sub_437df0(arg1, ebx_1, ebp_1, arg3, arg4, arg5)
    case 2
        sub_437ea0(arg1, ebx_1, ebp_1, arg3, arg4, arg5)
    case 3
        sub_437f50(arg1, ebx_1, ebp_1, arg3, arg4, arg5)

int32_t eax_7
int32_t edx_2
edx_2:eax_7 = sx.q(arg5)
int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q(arg4)

switch (jump_table_437364[(((eax_7 - edx_2) s>> 1 & 1) * 2) | ((eax_10 - edx_3) s>> 1 & 1)])
    case 0x4372e2
        sub_438000(arg1, ebx_1, ebp_1, arg3, arg4, arg5)
        void* eax_15
        eax_15.b = 1
        return eax_15
    case 0x4372fe
        sub_4380a0(arg1, ebx_1, ebp_1, arg3, arg4, arg5)
        int32_t eax_17
        eax_17.b = 1
        return eax_17
    case 0x43731a
        sub_438140(arg1, ebx_1, ebp_1, arg3, arg4, arg5)
        void* eax_19
        eax_19.b = 1
        return eax_19
    case 0x437336
        sub_4381e0(arg1, ebx_1, ebp_1, arg3, arg4, arg5)
        void* eax_21
        eax_21.b = 1
        return eax_21
