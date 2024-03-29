/*
 * charts/chart_filled_red.js
 *
 * Demo JavaScript used on charts-page for "Filled Chart (Red)".
 */

"use strict";

$(document).ready(function(){

	// Sample Data
	var d1 = [[1262304000000, 2700], [1264982400000, 2300], [1267401600000, 2600], [1270080000000, 2300], [1272672000000, 2000], [1275350400000, 1900], [1277942400000, 1500], [1280620800000, 1000], [1283299200000, 1300], [1285891200000, 1000], [1288569600000, 900], [1291161600000, 500]];

	var data1 = [
		{ label: "Total clicks", data: d1, color: App.getLayoutColorCode('red') }
	];
if($("#chart_filled_red").length){
	$.plot("#chart_filled_red", data1, $.extend(true, {}, Plugins.getFlotDefaults(), {
		xaxis: {
			min: (new Date(2009, 12, 1)).getTime(),
			max: (new Date(2010, 11, 2)).getTime(),
			mode: "time",
			tickSize: [1, "month"],
			monthNames: ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"],
			tickLength: 0
		},
		series: {
			lines: {
				fill: true,
				lineWidth: 1.5
			},
			points: {
				show: true,
				radius: 2.5,
				lineWidth: 1.1
			}
		},
		grid: {
			hoverable: true,
			clickable: true
		},
		tooltip: true,
		tooltipOpts: {
			content: '%s: %y'
		}
	}));
}


});