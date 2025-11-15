// 函数: ?SkipSegmentSearch@WorkSearchContext@details@Concurrency@@AAE_NPAVScheduleGroupSegmentBase@23@0W4SearchAffinity@123@_N@Z
// 地址: 0x6fea7a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (arg2 != arg3)
    bool ebx_1 = false
    
    if (arg4 == 0)
        ebx_1 = (*(arg2 + 0xc) & 0xfffffff) != 0
    else
        bool cond:0_1
        
        if (arg4 == 1)
            if ((*(arg2 + 0xc) & 0xfffffff) == 0)
                ebx_1 = true
            else
                cond:0_1 = Concurrency::location::_FastVPIntersects(*arg1 + 0x94, arg2 + 0xc).b != 0
            label_6feaee:
                
                if (not(cond:0_1))
                    ebx_1 = true
        else if (arg4 == 2)
            if ((*(arg2 + 0xc) & 0xfffffff) == 0)
                ebx_1 = true
            else if (Concurrency::location::_FastVPIntersects(*arg1 + 0x94, arg2 + 0xc).b != 0)
                ebx_1 = true
            else if (sub_6f1a43(arg1[1] + 0x3c, arg2 + 0x1c).b != 0)
                cond:0_1 = arg5 != 0
                goto label_6feaee
    
    result.b = ebx_1
else
    result.b = 1

return result
