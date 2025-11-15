// 函数: ?_ValidPolicyValue@SchedulerPolicy@Concurrency@@CA_NW4PolicyElementKey@2@I@Z
// 地址: 0x6f51c1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool ecx = true

if (arg1 u> 9)
    noreturn _terminate() __tailcall

int32_t result
bool cond:0_1

switch (arg1)
    case 0
        ecx = arg2 == 0
    case 1
        if (arg2 == 0 || arg2 u> 0x7fffffff)
            cond:0_1 = arg2 == 0xffffffff
            goto label_6f5202
    case 2
        if (arg2 u> 0x7fffffff)
            cond:0_1 = arg2 == 0xffffffff
            goto label_6f5202
    case 3
        if (arg2 u<= 0 || arg2 u> 0x7fffffff)
            ecx = false
    case 4, 5
        result.b = sbb.b(0xff, 0xff, 0x7fffffff u< arg2)
        ecx = result.b + 1
    case 6
        if ((arg2 s< 0xfffffff9 || arg2 s>= 7) && arg2 != 0xf && arg2 != 0xfffffff1)
            cond:0_1 = arg2 == 0xf000
            goto label_6f5202
    case 7
        if (arg2 != 0)
            cond:0_1 = arg2 == 1
        label_6f5202:
            
            if (not(cond:0_1))
                ecx = false
    case 8
        if (arg2 != 1)
            cond:0_1 = arg2 == 0
            goto label_6f5202
    case 9
        if (arg2 != 0)
            result.b = arg2 != 1
            result.b -= 1
            ecx = 1 & result.b

result.b = ecx
return result
