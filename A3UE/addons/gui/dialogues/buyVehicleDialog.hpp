class A3A_DefaultControlsGroup;
class A3A_ControlsGroupNoHScrollbars;

class A3A_BuyVehicleDialog
{
    class Controls
    {
        class VehicleTabRebTank : A3A_DefaultControlsGroup
        {
            idc = A3A_IDC_BUYREBVEHICLETANK;
            show = false;
            class Controls
            {
                class VehiclesControlsGroup : A3A_ControlsGroupNoHScrollbars
                {
                    idc = A3A_IDC_REBVEHICLESGROUPTANK;
                    x = 0;
                    y = 9 * GRID_H;
                    w = PX_W(DIALOG_W);
                    h = PX_H(DIALOG_H) - 9 * GRID_H;
                };
            };
        };

        class VehicleTabRebDrone : A3A_DefaultControlsGroup
        {
            idc = A3A_IDC_BUYREBVEHICLEDRONE;
            show = false;
            class Controls
            {
                class VehiclesControlsGroup : A3A_ControlsGroupNoHScrollbars
                {
                    idc = A3A_IDC_REBVEHICLESGROUPDRONE;
                    x = 0;
                    y = 9 * GRID_H;
                    w = PX_W(DIALOG_W);
                    h = PX_H(DIALOG_H) - 9 * GRID_H;
                };
            };
        };

        class VehicleTabRebMRAP : A3A_DefaultControlsGroup
        {
            idc = A3A_IDC_BUYREBVEHICLEMRAP;
            show = false;
            class Controls
            {
                class VehiclesControlsGroup : A3A_ControlsGroupNoHScrollbars
                {
                    idc = A3A_IDC_REBVEHICLESGROUPMRAP;
                    x = 0;
                    y = 9 * GRID_H;
                    w = PX_W(DIALOG_W);
                    h = PX_H(DIALOG_H) - 9 * GRID_H;
                };
            };
        };

        class VehicleTabRebAPC : A3A_DefaultControlsGroup
        {
            idc = A3A_IDC_BUYREBVEHICLEAPC;
            show = false;
            class Controls
            {
                class VehiclesControlsGroup : A3A_ControlsGroupNoHScrollbars
                {
                    idc = A3A_IDC_REBVEHICLESGROUPAPC;
                    x = 0;
                    y = 9 * GRID_H;
                    w = PX_W(DIALOG_W);
                    h = PX_H(DIALOG_H) - 9 * GRID_H;
                };
            };
        };

        class VehicleTabRebUtilities : A3A_DefaultControlsGroup
        {
            idc = A3A_IDC_BUYREBVEHICLEUTILITIES;
            show = false;
            class Controls
            {
                class VehiclesControlsGroup : A3A_ControlsGroupNoHScrollbars
                {
                    idc = A3A_IDC_REBVEHICLESGROUPUTILITIES;
                    x = 0;
                    y = 9 * GRID_H;
                    w = PX_W(DIALOG_W);
                    h = PX_H(DIALOG_H) - 9 * GRID_H;
                };
            };
        };

        class VehicleTabRebLightTank : A3A_DefaultControlsGroup
        {
            idc = A3A_IDC_BUYREBVEHICLELIGHTTANK;
            show = false;
            class Controls
            {
                class VehiclesControlsGroup : A3A_ControlsGroupNoHScrollbars
                {
                    idc = A3A_IDC_REBVEHICLESGROUPLIGHTTANK;
                    x = 0;
                    y = 9 * GRID_H;
                    w = PX_W(DIALOG_W);
                    h = PX_H(DIALOG_H) - 9 * GRID_H;
                };
            };
        };

        class VehicleTabRebIFV : A3A_DefaultControlsGroup
        {
            idc = A3A_IDC_BUYREBVEHICLEIFV;
            show = false;
            class Controls
            {
                class VehiclesControlsGroup : A3A_ControlsGroupNoHScrollbars
                {
                    idc = A3A_IDC_REBVEHICLESGROUPIFV;
                    x = 0;
                    y = 9 * GRID_H;
                    w = PX_W(DIALOG_W);
                    h = PX_H(DIALOG_H) - 9 * GRID_H;
                };
            };
        };

        class VehicleTabRebMilitaryHeli : A3A_DefaultControlsGroup
        {
            idc = A3A_IDC_BUYREBVEHICLEMILITARYHELI;
            show = false;
            class Controls
            {
                class VehiclesControlsGroup : A3A_ControlsGroupNoHScrollbars
                {
                    idc = A3A_IDC_REBVEHICLESGROUPMILITARYHELI;
                    x = 0;
                    y = 9 * GRID_H;
                    w = PX_W(DIALOG_W);
                    h = PX_H(DIALOG_H) - 9 * GRID_H;
                };
            };
        };
    };
};
