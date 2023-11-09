#ifndef QUADRUPED_DESCRIPTION_H
#define QUADRUPED_DESCRIPTION_H

#include <quadruped_base/quadruped_base.h>

namespace champ
{
    namespace URDF
    {
        void loadFromHeader(champ::QuadrupedBase &base)
        {
      base.lf.hip.setOrigin(0.1325, 0.07989, -0.034298, 0.0, 0.0, 0.0);
base.lf.upper_leg.setOrigin(0.0270000000000001, 0.063175339052324, -0.0121192629983798, 0.0, 0.0, 0.0);
base.lf.lower_leg.setOrigin(0.0, 0.00604899715606039, -0.139800425640405, 0.0, 0.0, 0.0);
     base.lf.foot.setOrigin(-0.00410350448816377, -0.0138748986174382, -0.162863312134045, 0.0, 0.0, 0.0);

      base.rf.hip.setOrigin(0.1325, -0.0798899999999921, -0.0342976400491808, 0.0, 0.0, 0.0);
base.rf.upper_leg.setOrigin(0.0269999999999999, -0.0628123830812422, -0.0138782034736232, 0.0, 0.0, 0.0);
base.rf.lower_leg.setOrigin(0.0, -0.00994944374978339, -0.13957706811974, 0.0, 0.0, 0.0);
     base.rf.foot.setOrigin(-0.0068961, 0.0093242, -0.16309, 0.0, 0.0, 0.0);

      base.lh.hip.setOrigin(-0.1325, 0.0798899999999998, -0.0342976400491648, 0.0, 0.0, 0.0);
base.lh.upper_leg.setOrigin(-0.072, 0.0630000000000001, -0.0130000000000001, 0.0, 0.0, 0.0);
base.lh.lower_leg.setOrigin(0.0, 0.00799999999999995, -0.139702359950834, 0.0, 0.0, 0.0);
     base.lh.foot.setOrigin(-0.0041035, -0.0116, -0.16304, 0.0, 0.0, 0.0);

      base.rh.hip.setOrigin(-0.1325, -0.07989, -0.034298, 0.0, 0.0, 0.0);
base.rh.upper_leg.setOrigin(-0.0719999999999999, -0.0630000000000001, -0.013, 0.0, 0.0, 0.0);
base.rh.lower_leg.setOrigin(0.0, -0.00799999999999998, -0.139702359950835, 0.0, 0.0, 0.0);
     base.rh.foot.setOrigin(-0.0068961, 0.0116, -0.16295, 0.0, 0.0, 0.0);
        }
    }
}
#endif